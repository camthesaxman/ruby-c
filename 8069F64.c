int __fastcall sub_8069F64(unsigned __int8 a1)
{
  char *v1; // r5@1
  char v2; // r0@3
  _WORD *v3; // r2@8
  unsigned int v4; // r1@8
  __int16 v6; // [sp+0h] [bp-10h]@1
  int v7; // [sp+2h] [bp-Eh]@1
  int v8; // [sp+Ch] [bp-4h]@10

  v1 = (char *)&unk_3004B28 + 40 * a1;
  PlayerGetDestCoords(&v6, &v7);
  if ( v6 != *((_WORD *)v1 + 1) || (signed __int16)v7 != *((_WORD *)v1 + 2) )
  {
    *((_WORD *)v1 + 1) = v6;
    *((_WORD *)v1 + 2) = v7;
    v2 = MapGridGetMetatileBehaviorAt(v6, (signed __int16)v7);
    if ( MetatileBehavior_IsAsh(v2) << 24 )
    {
      if ( MapGridGetMetatileIdAt(v6, (signed __int16)v7) == 522 )
        ash(v6, (signed __int16)v7, 530, 4);
      else
        ash(v6, (signed __int16)v7, 518, 4);
      if ( sub_80A92D4(270, 1) << 24 )
      {
        v3 = (_WORD *)GetVarPointer(0x4048u);
        v4 = *v3;
        if ( v4 <= 0x270E )
          *v3 = v4 + 1;
      }
    }
  }
  return v8;
}
