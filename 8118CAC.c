int __fastcall sub_8118CAC(int a1)
{
  int v1; // r4@1
  int v2; // r1@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_8118724(a1);
  v2 = *(_WORD *)(v1 + 52);
  if ( v2 == 90 )
  {
    if ( *(_WORD *)(v1 + 46) != 1 )
    {
_08118CD8:
      *(_DWORD *)(v1 + 28) = sub_8118BD8;
      *(_WORD *)(v1 + 50) = 0;
      return v4;
    }
  }
  else if ( v2 == 270 && *(_WORD *)(v1 + 46) )
  {
    goto _08118CD8;
  }
  return v4;
}
