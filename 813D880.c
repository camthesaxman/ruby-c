int __fastcall sub_813D880(int a1)
{
  int v1; // r4@1
  signed int v2; // r0@1
  __int16 v3; // r0@7
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 == 1 )
  {
    if ( *(_WORD *)(v1 + 36) + (signed int)*(_WORD *)(v1 + 32) > 303 )
    {
      *(_WORD *)(v1 + 46) = 2;
      goto _0813D8E2;
    }
    v3 = *(_WORD *)(v1 + 36) + 8;
_0813D8E0:
    *(_WORD *)(v1 + 36) = v3;
    goto _0813D8E2;
  }
  if ( v2 <= 1 )
    goto _0813D8E2;
  if ( v2 == 2 )
  {
    if ( *(_WORD *)(v1 + 36) + (signed int)*(_WORD *)(v1 + 32) <= 120 )
    {
      *(_WORD *)(v1 + 46) = 3;
      goto _0813D8E2;
    }
    v3 = *(_WORD *)(v1 + 36) - 1;
    goto _0813D8E0;
  }
  if ( v2 == 3 && (signed int)*(_WORD *)(v1 + 36) > 0 )
  {
    v3 = *(_WORD *)(v1 + 36) - 2;
    goto _0813D8E0;
  }
_0813D8E2:
  *(_WORD *)(v1 + 38) = sine(*(_WORD *)(v1 + 48) & 0xFF, 8) - v203935A;
  *(_WORD *)(v1 + 48) += 4;
  return v5;
}
