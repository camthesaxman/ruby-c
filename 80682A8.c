int __fastcall sub_80682A8(int a1, int a2, unsigned __int8 a3)
{
  int v3; // r4@1
  int v4; // r6@1
  unsigned __int8 v5; // r0@1
  int v6; // r0@2
  int v7; // r1@2
  int v8; // r3@4
  int v10; // r4@7
  signed int v11; // r1@7

  v3 = a1;
  v4 = a3;
  v5 = MapGridGetMetatileBehaviorAt(*(_WORD *)a1, *(_WORD *)(a1 + 2));
  if ( MetatileBehavior_IsCounter(v5) << 24 )
  {
    v6 = (*(_WORD *)v3 + gUnknown_0821664C[2 * v4]) & 0xFFFF;
    v7 = (*(_WORD *)(v3 + 2) + gUnknown_0821664C[2 * v4 + 1]) & 0xFFFF;
  }
  else
  {
    LOWORD(v6) = *(_WORD *)v3;
    LOWORD(v7) = *(_WORD *)(v3 + 2);
  }
  v8 = (unsigned __int8)GetFieldObjectIdByXYZ(v6, v7, *(_BYTE *)(v3 + 4));
  if ( v8 != 16 && LOBYTE(dword_30048A0[9 * v8 + 2]) != 255 )
  {
    v10 = 0;
    v11 = 33724440;
    while ( *(_BYTE *)v11 != 1 || *(_BYTE *)(v11 + 2) != v8 )
    {
      v11 += 4;
      if ( ++v10 > 3 )
      {
        byte_3004AE0 = v8;
        v202E8DE = LOBYTE(dword_30048A0[9 * v8 + 2]);
        v202E8E0 = v4;
        return GetFieldObjectScriptPointerByFieldObjectId(v8);
      }
    }
  }
  return 0;
}
