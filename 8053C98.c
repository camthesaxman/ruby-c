int sub_8053C98()
{
  char v0; // r1@1
  char *v1; // r0@3
  int v3; // [sp+0h] [bp-4h]@0

  v0 = v202E83D;
  if ( !v202E83D )
    goto _08053CD2;
  if ( !(FlagGet(2088) << 24) )
  {
    v0 = 4;
_08053CD2:
    v1 = (char *)33707876;
    goto _08053CD4;
  }
  v1 = (char *)33707876;
  v0 = 1;
_08053CD4:
  *v1 = v0;
  return v3;
}
