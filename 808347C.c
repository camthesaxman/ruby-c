int sub_808347C()
{
  unsigned __int8 v0; // r3@1
  unsigned __int8 v1; // r2@1
  __int16 *v2; // r1@7
  signed __int16 v3; // r4@7
  int v5; // [sp+4h] [bp-4h]@0

  v0 = 2;
  v1 = 2;
  if ( v202E8CC == 2 )
  {
    v0 = 2;
    v2 = &gLinkType;
    v3 = 8772;
  }
  else if ( (signed int)v202E8CC > 2 )
  {
    if ( v202E8CC != 5 )
      goto _080834CC;
    v0 = 4;
    v1 = 4;
    v2 = &gLinkType;
    v3 = 8789;
  }
  else
  {
    if ( v202E8CC != 1 )
      goto _080834CC;
    v0 = 2;
    v2 = &gLinkType;
    v3 = 8755;
  }
  *v2 = v3;
_080834CC:
  sub_8082CD4(v0, v1);
  return v5;
}
