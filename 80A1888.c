int __fastcall sub_80A1888(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v5; // [sp+4h] [bp-4h]@0

  v3 = a1;
  if ( !(v202F38F & 0x80) )
  {
    *(_DWORD *)(a1 + 28) = SpriteCallbackDummy;
    if ( !GetMonData(33652752, 45, a3) )
      cry_related(*(_WORD *)(v3 + 46), 0);
  }
  return v5;
}
