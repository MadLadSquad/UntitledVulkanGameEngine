// Keys.hpp
// Last update 3/6/2021 by Madman10K
#pragma once
#include <glfw3.h>

/**
 * @brief A namespace of keys to be used for input. Also includes mouse keys
 */
namespace Keys
{
    [[maybe_unused]] constexpr uint16_t UnknownKey = 349;
    [[maybe_unused]] constexpr uint16_t Space = 32;
    [[maybe_unused]] constexpr uint16_t Apostrophe = 39;
    [[maybe_unused]] constexpr uint16_t Comma = 44;
    [[maybe_unused]] constexpr uint16_t Minus = 45;
    [[maybe_unused]] constexpr uint16_t Period = 46;
    [[maybe_unused]] constexpr uint16_t Slash = 47;
    [[maybe_unused]] constexpr uint16_t Zero = 48;
    [[maybe_unused]] constexpr uint16_t One = 49;
    [[maybe_unused]] constexpr uint16_t Two = 50;
    [[maybe_unused]] constexpr uint16_t Three= 51;
    [[maybe_unused]] constexpr uint16_t Four = 52;
    [[maybe_unused]] constexpr uint16_t Five = 53;
    [[maybe_unused]] constexpr uint16_t Six = 54;
    [[maybe_unused]] constexpr uint16_t Seven = 55;
    [[maybe_unused]] constexpr uint16_t Eight = 56;
    [[maybe_unused]] constexpr uint16_t Nine = 57;
    [[maybe_unused]] constexpr uint16_t Semicolon = 59;
    [[maybe_unused]] constexpr uint16_t Equal = 61;
    [[maybe_unused]] constexpr uint16_t A = 65;
    [[maybe_unused]] constexpr uint16_t B = 66;
    [[maybe_unused]] constexpr uint16_t C = 67;
    [[maybe_unused]] constexpr uint16_t D = 68;
    [[maybe_unused]] constexpr uint16_t E = 69;
    [[maybe_unused]] constexpr uint16_t F = 70;
    [[maybe_unused]] constexpr uint16_t G = 71;
    [[maybe_unused]] constexpr uint16_t H = 72;
    [[maybe_unused]] constexpr uint16_t I = 73;
    [[maybe_unused]] constexpr uint16_t J = 74;
    [[maybe_unused]] constexpr uint16_t K = 75;
    [[maybe_unused]] constexpr uint16_t L = 76;
    [[maybe_unused]] constexpr uint16_t M = 77;
    [[maybe_unused]] constexpr uint16_t N = 78;
    [[maybe_unused]] constexpr uint16_t O = 79;
    [[maybe_unused]] constexpr uint16_t P = 80;
    [[maybe_unused]] constexpr uint16_t Q = 81;
    [[maybe_unused]] constexpr uint16_t R = 82;
    [[maybe_unused]] constexpr uint16_t S = 83;
    [[maybe_unused]] constexpr uint16_t T = 84;
    [[maybe_unused]] constexpr uint16_t U = 85;
    [[maybe_unused]] constexpr uint16_t V = 86;
    [[maybe_unused]] constexpr uint16_t W = 87;
    [[maybe_unused]] constexpr uint16_t X = 88;
    [[maybe_unused]] constexpr uint16_t Y = 89;
    [[maybe_unused]] constexpr uint16_t Z = 90;
    [[maybe_unused]] constexpr uint16_t LeftBracket = 91;
    [[maybe_unused]] constexpr uint16_t Backslash = 92;
    [[maybe_unused]] constexpr uint16_t RightBracket = 93;
    [[maybe_unused]] constexpr uint16_t GraveAccent = 96;
    [[maybe_unused]] constexpr uint16_t WorldOne = 161;
    [[maybe_unused]] constexpr uint16_t WorldTwo = 162;
    [[maybe_unused]] constexpr uint16_t Escape = 256;
    [[maybe_unused]] constexpr uint16_t Enter = 257;
    [[maybe_unused]] constexpr uint16_t Tab = 258;
    [[maybe_unused]] constexpr uint16_t Backspace = 259;
    [[maybe_unused]] constexpr uint16_t Insert = 260;
    [[maybe_unused]] constexpr uint16_t Delete = 261;
    [[maybe_unused]] constexpr uint16_t RightArrow = 262;
    [[maybe_unused]] constexpr uint16_t LeftArrow = 263;
    [[maybe_unused]] constexpr uint16_t DownArror = 264;
    [[maybe_unused]] constexpr uint16_t UpArrow = 265;
    [[maybe_unused]] constexpr uint16_t PageUp = 266;
    [[maybe_unused]] constexpr uint16_t PageDown = 267;
    [[maybe_unused]] constexpr uint16_t Home = 268;
    [[maybe_unused]] constexpr uint16_t End = 269;
    [[maybe_unused]] constexpr uint16_t CapsLock = 280;
    [[maybe_unused]] constexpr uint16_t ScrollLock = 281;
    [[maybe_unused]] constexpr uint16_t NumLock = 282;
    [[maybe_unused]] constexpr uint16_t PrintSceen = 283;
    [[maybe_unused]] constexpr uint16_t Pause = 284;
    [[maybe_unused]] constexpr uint16_t F1 = 290;
    [[maybe_unused]] constexpr uint16_t F2 = 291;
    [[maybe_unused]] constexpr uint16_t F3 = 292;
    [[maybe_unused]] constexpr uint16_t F4 = 293;
    [[maybe_unused]] constexpr uint16_t F5 = 294;
    [[maybe_unused]] constexpr uint16_t F6 = 295;
    [[maybe_unused]] constexpr uint16_t F7 = 296;
    [[maybe_unused]] constexpr uint16_t F8 = 297;
    [[maybe_unused]] constexpr uint16_t F9 = 298;
    [[maybe_unused]] constexpr uint16_t F10 = 299;
    [[maybe_unused]] constexpr uint16_t F11 = 300;
    [[maybe_unused]] constexpr uint16_t F12 = 301;
    [[maybe_unused]] constexpr uint16_t F13 = 302;
    [[maybe_unused]] constexpr uint16_t F14 = 303;
    [[maybe_unused]] constexpr uint16_t F15 = 304;
    [[maybe_unused]] constexpr uint16_t F16 = 305;
    [[maybe_unused]] constexpr uint16_t F17 = 306;
    [[maybe_unused]] constexpr uint16_t F18 = 307;
    [[maybe_unused]] constexpr uint16_t F19 = 308;
    [[maybe_unused]] constexpr uint16_t F20 = 309;
    [[maybe_unused]] constexpr uint16_t F21 = 310;
    [[maybe_unused]] constexpr uint16_t F22 = 311;
    [[maybe_unused]] constexpr uint16_t F23 = 312;
    [[maybe_unused]] constexpr uint16_t F24 = 313;
    [[maybe_unused]] constexpr uint16_t F25 = 314;
    [[maybe_unused]] constexpr uint16_t NumPadZero = 320;
    [[maybe_unused]] constexpr uint16_t NumPadOne = 321;
    [[maybe_unused]] constexpr uint16_t NumPadTwo = 322;
    [[maybe_unused]] constexpr uint16_t NumPadThree = 323;
    [[maybe_unused]] constexpr uint16_t NumPadFour = 324;
    [[maybe_unused]] constexpr uint16_t NumPadFive = 325;
    [[maybe_unused]] constexpr uint16_t NumPadSix = 326;
    [[maybe_unused]] constexpr uint16_t NumPadSeven = 327;
    [[maybe_unused]] constexpr uint16_t NumPadEight = 328;
    [[maybe_unused]] constexpr uint16_t NumPadNine = 329;
    [[maybe_unused]] constexpr uint16_t NumPadDecimal = 330;
    [[maybe_unused]] constexpr uint16_t NumPadDivide = 331;
    [[maybe_unused]] constexpr uint16_t NumPadMultiply = 332;
    [[maybe_unused]] constexpr uint16_t NumPadSubstract = 333;
    [[maybe_unused]] constexpr uint16_t NumPadAdd = 334;
    [[maybe_unused]] constexpr uint16_t NumPadEnter = 335;
    [[maybe_unused]] constexpr uint16_t NumPadEqual = 336;
    [[maybe_unused]] constexpr uint16_t LeftShift= 340;
    [[maybe_unused]] constexpr uint16_t LeftControl = 341;
    [[maybe_unused]] constexpr uint16_t LeftAlt= 342;
    [[maybe_unused]] constexpr uint16_t LeftSuper = 343;
    [[maybe_unused]] constexpr uint16_t RightShift = 344;
    [[maybe_unused]] constexpr uint16_t RightControl = 345;
    [[maybe_unused]] constexpr uint16_t RightAlt = 346;
    [[maybe_unused]] constexpr uint16_t RightSuper = 347;
    [[maybe_unused]] constexpr uint16_t Menu = 348;

    [[maybe_unused]] constexpr uint16_t MouseButton1 = 0;
    [[maybe_unused]] constexpr uint16_t MouseButton2 = 1;
    [[maybe_unused]] constexpr uint16_t MouseButton3 = 2;
    [[maybe_unused]] constexpr uint16_t MouseButton4 = 3;
    [[maybe_unused]] constexpr uint16_t MouseButton5 = 4;
    [[maybe_unused]] constexpr uint16_t MouseButton6 = 5;
    [[maybe_unused]] constexpr uint16_t MouseButton7 = 6;
    [[maybe_unused]] constexpr uint16_t MouseButton8 = 7;
    [[maybe_unused]] constexpr uint16_t MouseButtonLast = 7;
    [[maybe_unused]] constexpr uint16_t MouseButtonLeft = 0;
    [[maybe_unused]] constexpr uint16_t MouseButtonRight = 1;
    [[maybe_unused]] constexpr uint16_t MouseButtonMiddle = 2;

    [[maybe_unused]] constexpr uint16_t ScrollUp = 8;
    [[maybe_unused]] constexpr uint16_t ScrollDown = 9;
    [[maybe_unused]] constexpr uint16_t ScrollRight = 10;
    [[maybe_unused]] constexpr uint16_t ScrollLeft = 11;

    [[maybe_unused]] constexpr uint16_t KeyReleased = 0;
    [[maybe_unused]] constexpr uint16_t KeyPressed = 1;
    [[maybe_unused]] constexpr uint16_t KeyRepeat = 2;
    [[maybe_unused]] constexpr uint16_t KeyAny = 3;
}

