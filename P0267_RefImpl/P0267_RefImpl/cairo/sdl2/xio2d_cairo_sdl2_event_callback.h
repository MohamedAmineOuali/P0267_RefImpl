//
// Created by Amine on 12/11/19.
//

#ifndef OSM_A_STAR_SEARCH_XIO2D_CAIRO_SDL2_EVENT_CALLBACK_H
#define OSM_A_STAR_SEARCH_XIO2D_CAIRO_SDL2_EVENT_CALLBACK_H

#include <functional>

namespace std::experimental::io2d {
    inline namespace v1 {
        namespace _Cairo {



            template<class GraphicsMath>
            struct _Cairo_graphics_surfaces<GraphicsMath>::_EventCallBack {
                const ::std::function<void(SDL_Event& )>& fn;
            public:
                _EventCallBack(const std::function<void(SDL_Event &)> &fn) : fn(fn) {}

                void operator()(SDL_Event e){
                    fn(e);
                }
            };

        }
    }
}

#endif //OSM_A_STAR_SEARCH_XIO2D_CAIRO_SDL2_EVENT_CALLBACK_H
