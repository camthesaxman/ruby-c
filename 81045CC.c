int __fastcall sub_81045CC(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  signed __int16 v3; // r0@4
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_8102D28(*(_WORD *)(a1 + 16) << 16 >> 24);
  *(_WORD *)(v1 + 16) = *(_BYTE *)(v1 + 16) + 64;
  v2 = *(_WORD *)(v1 + 18) + 1;
  *(_WORD *)(v1 + 18) = v2;
  if ( v2 > 39 )
  {
    *(_WORD *)(v1 + 18) = 0;
    if ( v2000005 )
    {
      if ( v200000A <= (signed int)*(_WORD *)(v1 + 20) )
      {
        v3 = *(_WORD *)(v1 + 8) + 1;
_0810462C:
        *(_WORD *)(v1 + 8) = v3;
        goto _0810462E;
      }
    }
    else
    {
      if ( (signed int)*(_WORD *)(v1 + 20) > 3 )
      {
        v3 = *(_WORD *)(v1 + 8) + 1;
        goto _0810462C;
      }
      if ( sub_81026DC(*(_WORD *)(v1 + 20)) << 24 )
      {
        v3 = 14;
        goto _0810462C;
      }
    }
_0810462E:
    ++*(_WORD *)(v1 + 20);
  }
  return v5;
}
