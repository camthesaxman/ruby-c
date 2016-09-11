int __fastcall BuyMenuDrawMapMetatileLayer(int a1, __int16 a2, __int16 a3, int a4)
{
  int v4; // r1@1
  int result; // r0@1

  v4 = 2 * (a2 + a3) + a1;
  *(_WORD *)v4 = *(_WORD *)a4;
  *(_WORD *)(v4 + 2) = *(_WORD *)(a4 + 2);
  *(_WORD *)(v4 + 64) = *(_WORD *)(a4 + 4);
  result = *(_WORD *)(a4 + 6);
  *(_WORD *)(v4 + 66) = result;
  return result;
}
