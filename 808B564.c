int sub_808B564()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = v202F390 | 0x80;
  v202F390 |= 0x80u;
  if ( (unsigned __int8)sub_809FA30(v0) == 4 )
    sub_806AF4C(0, 0, (int)sub_806F588, -1);
  else
    sub_806AF4C(0, 0, (int)sub_806F490, -1);
  SetMainCallback2((int)sub_808B518);
  return v2;
}
