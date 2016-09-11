int __fastcall sub_805BDF8(unsigned __int16 a1)
{
  int v1; // r1@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = FindFieldObjectPaletteIndexByTag(a1) & 0xFF;
  if ( v1 != 4607 )
    sub_805BE58(&gUnknown_0837377C + 2 * v1);
  return v3;
}
