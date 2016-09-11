int __fastcall sub_80AAD08(int a1, char a2)
{
  int v3; // [sp+8h] [bp-4h]@0

  if ( a2 == 1 )
  {
    v2000000 = *(_WORD *)(a1 + 52);
    SetMainCallback2((int)sub_80AACC4);
    BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
  }
  return v3;
}
