package main

import (
	"math"
	"github.com/tfriedel6/canvas/sdlcanvas"
)

type rect struct {
    x float64
    y float64
    w float64
    h float64
};

func main() {
	wnd, cv, err := sdlcanvas.CreateWindow(500, 500, "Hello")
	if err != nil {
		panic(err)
	}
	defer wnd.Destroy()

    w, h := float64(cv.Width()), float64(cv.Height())

    var rects[100]rect;
    for i := 0; i < int(w/10); i++ {
        rects[i] = rect{float64(10*i+2),(h/2)-50,6,100}
    }

    j := 0.0
	wnd.MainLoop(func() {
		cv.SetFillStyle("#000")
		cv.FillRect(0, 0, w, h)

        for i := 0; i < int(w/10); i++ {
            cv.SetFillStyle("#fff")
            cv.FillRect(rects[i].x,rects[i].y,rects[i].w,rects[i].h) 
            x := math.Sin(float64(j)) * 5 
            rects[i].y += x  
            j += 0.5
        }

	})
}
