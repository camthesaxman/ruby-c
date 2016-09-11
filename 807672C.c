int __fastcall sub_807672C(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r1@1
  __int16 v3; // r0@1
  unsigned int v4; // r0@2
  bool v5; // r4@4
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 5) + 1;
  *((_WORD *)v2 + 5) = v3;
  if ( v3 != 1 )
  {
    v4 = (unsigned int)((battle_get_per_side_status(*((_BYTE *)v2 + 12)) << 24) - 0x1000000) >> 24;
    v5 = v4 > 1 && !(sub_8076BE0(v4) << 24);
    if ( v202F7C2 != 255 )
    {
      sub_8076464(v5);
      DestroyTask(v202F7C2);
      v202F7C2 = -1;
    }
    if ( (signed int)LOWORD(dword_3004B20[10 * v1 + 2]) > 1 )
    {
      sub_8076464(!v5);
      DestroyTask(v202F7C3);
      v202F7C3 = -1;
    }
    DestroyTask(v1);
  }
  return v7;
}
