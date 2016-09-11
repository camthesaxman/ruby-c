int __fastcall sub_80CA2BC(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r1@1
  __int16 v3; // r0@1
  signed int v4; // r0@2
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 19) + 1;
  *((_WORD *)v2 + 19) = v3;
  if ( v3 > 7 )
  {
    audio_play(1u);
    sub_80A9538(v203855E, 1u);
    v4 = sub_803F378(v203855E);
    DisplayItemMessageOnField(v1, v4, sub_80CA294, 1);
  }
  return v6;
}
