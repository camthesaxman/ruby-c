signed int __fastcall sub_80FA364(int a1)
{
  int v1; // r4@1
  signed int result; // r0@4
  unsigned int v3; // r6@5
  signed int v4; // r3@7
  int v5; // r2@8
  int v6; // r1@8
  int v7; // r2@9
  int v8; // r1@9
  int v9; // [sp+0h] [bp-1Ch]@1
  int v10; // [sp+4h] [bp-18h]@1

  v1 = a1;
  v9 = 0;
  v10 = 0;
  if ( sub_80FA7C8() << 24 )
  {
_080FA462:
    result = 0;
  }
  else if ( FlagGet(0x833u) << 24 || (FlagSet(0x833u), FlagGet(0x834u) << 24) )
  {
    v10 = *(_WORD *)v1 | (*(_WORD *)(v1 + 2) << 16);
    v9 |= 0x4000u;
    sub_80FA740(&v9);
    v3 = 0;
    while ( !(atk90_changetypestoenemyattacktype(&v9, 8 * v3 + 33719560, 0) << 24) )
    {
      v3 = (v3 + 1) & 0xFFFF;
      if ( v3 > 4 )
      {
        v2028528 = v9;
        v202852C = v10;
        goto _080FA462;
      }
    }
    v4 = 4;
    if ( v3 < 4 )
    {
      do
      {
        v5 = 8 * v4-- + 33719560;
        v6 = *(_DWORD *)(8 * v4 + 0x202850C);
        *(_DWORD *)v5 = *(_DWORD *)(8 * v4 + 0x2028508);
        *(_DWORD *)(v5 + 4) = v6;
        v4 = (unsigned __int16)v4;
      }
      while ( (unsigned __int16)v4 > v3 );
    }
    v7 = 8 * v3 + 33719560;
    v8 = v10;
    *(_DWORD *)v7 = v9;
    *(_DWORD *)(v7 + 4) = v8;
    result = 0;
    if ( !v3 )
      result = 1;
  }
  else
  {
    v202850C = *(_WORD *)v1;
    v202850E = *(_WORD *)(v1 + 2);
    result = 1;
  }
  return result;
}
