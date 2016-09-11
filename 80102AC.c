int __fastcall sub_80102AC(int a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( *(_BYTE *)(a1 + 63) & 0x10 )
  {
    sub_804777C(*(_WORD *)(a1 + 46) & 0xFF);
    sub_8043DFC((unsigned __int8)byte_3004340[*(_WORD *)(v1 + 46)]);
    *(_DWORD *)(v1 + 28) = nullsub_37;
    StartSpriteAnimIfDifferent(v1, 0);
    BeginNormalPaletteFade(0x20000, 0, 10, 0);
  }
  return v3;
}
