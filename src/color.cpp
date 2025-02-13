// Copyright (c) 1981-86 Robert A. Koeneke
// Copyright (c) 1987-94 James E. Wilson
//
// This work is free software released under the GNU General Public License
// version 2.0, and comes with ABSOLUTELY NO WARRANTY.
//
// See LICENSE and AUTHORS for more information.

#include "headers.h"

Color_t colors[255] = {
    {0, 255, 255, 255}, /* Color_White            */
    {0, 232, 232, 232}, /* Color_Light_Grey_High  */
    {0, 212, 212, 212}, /* Color_Light_Grey_Low   */
    {0, 188, 188, 188}, /* Color_Medium_Grey_High */
    {0, 168, 168, 168}, /* Color_Medium_Grey_Low  */
    {0, 144, 144, 144}, /* Color_Dark_Grey_High   */
    {0, 120, 120, 120}, /* Color_Dark_Grey_Low    */
    {0, 96, 96, 96},    /* Color_Black            */
    {0, 255, 80, 80},   /* Color_Light_Red        */
    {0, 96, 255, 96},   /* Color_Light_Green      */
    {0, 255, 255, 96},  /* Color_Light_Yellow     */
    {0, 96, 160, 255},  /* Color_Light_Blue       */
    {0, 255, 137, 49},  /* Color_Light_Orange     */
    {0, 188, 126, 255}, /* Color_Light_Purple     */
    {0, 224, 0, 0},     /* Color_Red              */
    {0, 0, 224, 0},     /* Color_Green            */
    {0, 224, 224, 0},   /* Color_Yellow           */
    {0, 0, 61, 213},    /* Color_Blue             */
    {0, 253, 88, 0},    /* Color_Orange           */
    {0, 121, 0, 253},   /* Color_Purple           */
    {0, 144, 0, 0},     /* Color_Dark_Red         */
    {0, 0, 97, 62},     /* Color_Dark_Green       */
    {0, 144, 128, 0},   /* Color_Dark_Yellow      */
    {0, 0, 32, 110},    /* Color_Dark_Blue        */
    {0, 152, 32, 0},    /* Color_Dark_Orange      */
    {0, 84, 0, 176},    /* Color_Dark_Purple      */
    {0, 240, 240, 176}, /* Color_Cream            */
    {0, 240, 150, 20},  /* Color_Amber            */
    {0, 224, 208, 176}, /* Color_Driftwood        */
    {0, 224, 64, 96},   /* Color_Coral            */
    {0, 224, 192, 96},  /* Color_Agate            */
    {0, 255, 255, 240}, /* Color_Ivory            */
    {0, 64, 64, 128},   /* Color_Obsidian         */
    {0, 224, 224, 208}, /* Color_Bone             */
    {0, 224, 192, 0},   /* Color_Brass            */
    {0, 176, 141, 87},  /* Color_Bronze           */
    {0, 150, 150, 192}, /* Color_Pewter           */
    {0, 208, 192, 96},  /* Color_Tortoise_Shell   */
    {0, 240, 240, 240}, /* Color_Aluminum         */
    {0, 160, 160, 176}, /* Color_Cast_Iron        */
    {0, 240, 240, 240}, /* Color_Chromium         */
    {0, 151, 92, 80},   /* Color_Copper           */
    {0, 209, 181, 85},  /* Color_Gold             */
    {0, 176, 176, 192}, /* Color_Iron             */
    {0, 240, 240, 240}, /* Color_Magnesium        */
    {0, 240, 240, 240}, /* Color_Molybdenum       */
    {0, 240, 240, 240}, /* Color_Nickel           */
    {0, 208, 96, 32},   /* Color_Rusty            */
    {0, 160, 180, 224}, /* Color_Silver           */
    {0, 224, 224, 240}, /* Color_Steel            */
    {0, 224, 224, 224}, /* Color_Tin              */
    {0, 160, 160, 176}, /* Color_Titanium         */
    {0, 192, 192, 192}, /* Color_Tungsten         */
    {0, 96, 96, 96},    /* Color_Zirconium        */
    {0, 208, 224, 255}, /* Color_Zinc             */
    {0, 160, 112, 96},  /* Color_Dirt             */
    {0, 144, 144, 64},  /* Color_Leprous          */
    {0, 214, 181, 156}, /* Color_Flesh            */
    {0, 224, 255, 176}, /* Color_Disenchanting    */
    {0, 176, 128, 96},  /* Color_Rotting          */
    {0, 224, 224, 208}, /* Color_Clay             */
    {0, 192, 192, 192}, /* Color_Stone            */
    {0, 255, 80, 64},   /* Color_Fire             */
    {0, 64, 192, 240},  /* Color_Water            */
    {0, 176, 112, 64},  /* Color_Earth            */
    {0, 255, 255, 255}, /* Color_Air              */
    {0, 64, 224, 255},  /* Color_Frost            */
    {0, 240, 240, 176}, /* Color_Glowing          */
    {0, 160, 224, 160}, /* Color_Gelatinous       */
    {0, 208, 176, 64},  /* Color_Umber            */
    {0, 224, 160, 255}, /* Color_Crystal          */
    {0, 128, 96, 77},   /* Color_Brown            */
    {0, 240, 224, 160}, /* Color_Ecru             */
    {0, 224, 160, 0},   /* Color_Furry            */
    {0, 208, 208, 208}, /* Color_Plaid            */
    {0, 96, 176, 0},    /* Color_Slimy            */
    {0, 210, 180, 140}, /* Color_Tan              */
    {0, 208, 144, 80},  /* Color_Wooden           */
    {0, 208, 208, 176}, /* Color_Wrinkled         */
    {0, 160, 255, 0},   /* Color_Icky_Green       */
    {0, 181, 101, 29},  /* Color_Light_Brown      */
    {0, 200, 200, 255}, /* Color_Clear            */
    {0, 128, 192, 255}, /* Color_Azure            */
    {0, 240, 240, 240}, /* Color_Bubbling         */
    {0, 176, 208, 112}, /* Color_Chartreuse       */
    {0, 112, 112, 128}, /* Color_Cloudy           */
    {0, 176, 64, 64},   /* Color_Crimson          */
    {0, 0, 255, 255},   /* Color_Cyan             */
    {0, 176, 176, 176}, /* Color_Hazy             */
    {0, 112, 0, 192},   /* Color_Indigo           */
    {0, 224, 0, 224},   /* Color_Magenta          */
    {0, 64, 144, 255},  /* Color_Metallic_Blue    */
    {0, 255, 32, 64},   /* Color_Metallic_Red     */
    {0, 32, 255, 96},   /* Color_Metallic_Green   */
    {0, 144, 96, 208},  /* Color_Metallic_Purple  */
    {0, 240, 240, 240}, /* Color_Misty            */
    {0, 255, 144, 224}, /* Color_Pink             */
    {0, 176, 96, 128},  /* Color_Puce             */
    {0, 112, 96, 96},   /* Color_Smoky            */
    {0, 242, 133, 0},   /* Color_Tangerine        */
    {0, 224, 0, 240},   /* Color_Violet           */
    {0, 227, 66, 52},   /* Color_Vermilion        */
    {0, 112, 208, 0},   /* Color_Alexandrite      */
    {0, 176, 0, 255},   /* Color_Amethyst         */
    {0, 0, 208, 196},   /* Color_Aquamarine       */
    {0, 0, 176, 255},   /* Color_Azurite          */
    {0, 112, 176, 96},  /* Color_Beryl            */
    {0, 224, 80, 32},   /* Color_Bloodstone       */
    {0, 224, 224, 224}, /* Color_Calcite          */
    {0, 176, 48, 0},    /* Color_Carnelian        */
    {0, 220, 72, 123},  /* Color_Corundum         */
    {0, 132, 221, 233}, /* Color_Diamond          */
    {0, 64, 208, 64},   /* Color_Emerald          */
    {0, 240, 255, 224}, /* Color_Fluorite         */
    {0, 224, 0, 0},     /* Color_Garnet           */
    {0, 112, 112, 128}, /* Color_Granite          */
    {0, 112, 176, 48},  /* Color_Jade             */
    {0, 208, 80, 48},   /* Color_Jasper           */
    {0, 11, 25, 225},   /* Color_Lapis_Lazuli     */
    {0, 176, 80, 32},   /* Color_Magma            */
    {0, 112, 176, 64},  /* Color_Malachite        */
    {0, 128, 144, 144}, /* Color_Marble           */
    {0, 240, 240, 240}, /* Color_Moonstone        */
    {0, 224, 208, 208}, /* Color_Onyx             */
    {0, 240, 240, 240}, /* Color_Pearl            */
    {0, 230, 177, 170}, /* Color_Quartz           */
    {0, 208, 208, 208}, /* Color_Quartzite        */
    {0, 224, 0, 64},    /* Color_Rhodonite        */
    {0, 240, 64, 64},   /* Color_Ruby             */
    {0, 53, 0, 255},    /* Color_Sapphire         */
    {0, 224, 128, 64},  /* Color_Tiger_Eye        */
    {0, 224, 208, 32},  /* Color_Topaz            */
    {0, 0, 192, 192},   /* Color_Turquoise        */
    {0, 240, 224, 64},  /* Color_Zircon           */
    {0, 176, 112, 96},  /* Color_Food             */
    {0, 144, 208, 0},   /* Color_Slime            */
    {0, 120, 50, 32},   /* Color_Leather          */
    {0, 208, 224, 224}, /* Color_Cord             */
    {0, 240, 240, 224}, /* Color_Paper            */
    {0, 208, 192, 160}, /* Color_Old_Parchment    */
    {0, 208, 80, 0},    /* Color_Apple            */
    {0, 80, 96, 112},   /* Color_Oil              */
    {0, 80, 176, 255},  /* Color_Magic_Light      */
    {0, 144, 128, 112}, /* Color_Mud              */
    {0, 96, 112, 96},   /* Color_Acid             */
    {0, 208, 224, 224}, /* Color_Pottery          */
    {0, 176, 64, 96},   /* Color_Wine             */
    {0, 255, 255, 224}, /* Color_Mithril          */
    {0, 224, 176, 96},  /* Color_Aspen            */
    {0, 240, 224, 208}, /* Color_Balsa            */
    {0, 224, 192, 128}, /* Color_Banyan           */
    {0, 144, 128, 108}, /* Color_Birch            */
    {0, 176, 96, 64},   /* Color_Cedar            */
    {0, 208, 192, 176}, /* Color_Cottonwood       */
    {0, 208, 192, 160}, /* Color_Cypress          */
    {0, 160, 128, 112}, /* Color_Dogwood          */
    {0, 224, 176, 112}, /* Color_Elm              */
    {0, 208, 192, 144}, /* Color_Eucalyptus       */
    {0, 208, 176, 144}, /* Color_Hemlock          */
    {0, 176, 128, 112}, /* Color_Hickory          */
    {0, 112, 112, 128}, /* Color_Ironwood         */
    {0, 240, 208, 64},  /* Color_Locust           */
    {0, 176, 112, 64},  /* Color_Mahogany         */
    {0, 224, 208, 144}, /* Color_Maple            */
    {0, 176, 128, 128}, /* Color_Mulberry         */
    {0, 224, 160, 112}, /* Color_Oak              */
    {0, 176, 160, 144}, /* Color_Pine             */
    {0, 208, 96, 64},   /* Color_Redwood          */
    {0, 160, 80, 64},   /* Color_Rosewood         */
    {0, 176, 176, 80},  /* Color_Spruce           */
    {0, 208, 160, 128}, /* Color_Sycamore         */
    {0, 240, 208, 128}, /* Color_Teak             */
    {0, 208, 176, 144}, /* Color_Walnut           */
    {0, 96, 192, 255},  /* Color_Magic_Missile    */
    {0, 112, 192, 0},   /* Color_Poison_Gas       */
    {0, 96, 96, 96},    /* Color_Holy_Orb         */
    {0, 240, 240, 176}, /* Color_Lightning        */
    {0, 50, 50, 64},    /* Color_Deep_Black       */
    {0, 255, 80, 64},   /* Color_Shadow_And_Flame */
    /* All new colors to be put after this point. */
};
