int __fastcall task50_overworld_posion_effect(unsigned __int8 a1)
{
  unsigned __int8 v1; // r2@1
  _BYTE *v2; // r1@1
  signed int v3; // r0@1
  __int16 v4; // r0@7
  int v5; // r0@9
  int v7; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = &byte_3004B28[40 * a1];
  v3 = *(_WORD *)v2;
  if ( v3 == 1 )
  {
    v5 = *((_WORD *)v2 + 1) - 2;
    *((_WORD *)v2 + 1) = v5;
    if ( v5 << 16 )
    {
_080C7062:
      v400004C = 16 * *((_WORD *)v2 + 1) | *((_WORD *)v2 + 1);
      return v7;
    }
_080C7052:
    ++*(_WORD *)v2;
    goto _080C7062;
  }
  if ( v3 <= 1 )
  {
    if ( *(_WORD *)v2 )
      goto _080C7062;
    v4 = *((_WORD *)v2 + 1) + 2;
    *((_WORD *)v2 + 1) = v4;
    if ( v4 <= 8 )
      goto _080C7062;
    goto _080C7052;
  }
  if ( v3 != 2 )
    goto _080C7062;
  DestroyTask(v1);
  return v7;
}
