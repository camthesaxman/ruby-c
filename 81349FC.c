int __fastcall sub_81349FC(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r1@1
  _BYTE *v3; // r1@2
  int v4; // r0@2
  int v5; // r1@6
  unsigned int v6; // r2@6
  _BYTE *v7; // r0@10
  int v9; // [sp+0h] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  if ( v1 >> 24 > 0x63 )
  {
    if ( v2 > 0xC7 )
    {
      v4 = 33705636;
      v3 = (_BYTE *)1177;
    }
    else
    {
      v4 = 164 * (v2 - 100) + 33705636;
      v3 = (_BYTE *)333;
    }
  }
  else
  {
    v3 = &gBattleTowerTrainers;
    v4 = 24 * (v1 >> 24);
  }
  v5 = v3[v4];
  v6 = 0;
  if ( (unsigned __int8)gUnknown_08405E60[0] != v5 )
  {
    do
      ++v6;
    while ( v6 <= 0x1D && (unsigned __int8)gUnknown_08405E60[v6] != v5 );
  }
  if ( v6 == 30 )
  {
    v6 = 0;
    if ( (unsigned __int8)gUnknown_08405E7E[0] != v5 )
    {
      do
        ++v6;
      while ( v6 <= 0x13 && (unsigned __int8)gUnknown_08405E7E[v6] != v5 );
    }
    if ( v6 == 20 )
    {
      VarSet(0x4010u, 7);
      return v9;
    }
    v7 = &gUnknown_08405EB0;
  }
  else
  {
    v7 = &gUnknown_08405E92;
  }
  VarSet(0x4010u, v7[v6]);
  return v9;
}
