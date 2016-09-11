int __fastcall sub_80E8B78(int a1)
{
  char v1; // r4@4
  int v3; // [sp+4h] [bp-4h]@0

  if ( v200AC70 && *(_WORD *)(a1 + 48) )
  {
    if ( *(_WORD *)(a1 + 46) )
    {
      v1 = 0;
      if ( *v200AC6C == v200AC71 )
      {
_080E8BD4:
        v1 = 1;
        goto _080E8BD6;
      }
    }
    else
    {
      v1 = 0;
      if ( !*v200AC6C )
        goto _080E8BD4;
    }
_080E8BD6:
    *(_BYTE *)(a1 + 62) = *(_BYTE *)(a1 + 62) & 0xFB | 4 * v1;
  }
  return v3;
}
