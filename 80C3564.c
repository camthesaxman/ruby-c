signed int __fastcall sub_80C3564(int a1)
{
  signed int result; // r0@1

  *(_WORD *)(a1 + 32) = 272;
  *(_WORD *)(a1 + 34) = 144;
  *(_WORD *)(a1 + 38) = 0;
  *(_WORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 28) = SpriteCallbackDummy;
  result = 33652736;
  v2018004 = 0;
  return result;
}
