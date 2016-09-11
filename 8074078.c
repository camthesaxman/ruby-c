int __fastcall ResetPaletteStructByUid(unsigned __int16 a1)
{
  int v1; // r0@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = (unsigned __int8)GetPaletteNumByUid(a1);
  if ( v1 != 16 )
    ResetPaletteStruct(v1);
  return v3;
}
