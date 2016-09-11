int __fastcall unref_sub_8074168(unsigned __int16 a1)
{
  int v1; // r2@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = (unsigned __int8)GetPaletteNumByUid(a1);
  if ( v1 != 16 )
    *(_BYTE *)(12 * v1 + 0x202F2CC) |= 2u;
  return v3;
}
