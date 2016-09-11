_BOOL4 __fastcall MetatileBehavior_IsSurfableFishableWater(int a1)
{
  a1 = (unsigned __int8)a1;
  return (unsigned __int8)a1 == 16 || a1 == 21 || a1 == 17 || a1 == 18 || a1 == 20 || ((a1 - 80) & 0xFFu) <= 3;
}
