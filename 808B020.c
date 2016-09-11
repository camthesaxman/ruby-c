int sub_808B020()
{
  int v1; // [sp+0h] [bp-4h]@0

  v202F390 |= 0x80u;
  if ( v2038561 == 1 )
    goto LABEL_16;
  if ( (signed int)v2038561 <= 1 )
  {
    if ( !v2038561 )
    {
      if ( (unsigned __int8)CheckIfItemIsTMHMOrEvolutionStone(v203855E) == 1 )
        sub_806AF4C(0, 0, (int)sub_808B0C0, 20);
      else
        sub_806AF4C(0, 0, (int)sub_808B0C0, 3);
    }
    goto _0808B0AC;
  }
  if ( v2038561 == 3 )
  {
LABEL_16:
    sub_806AF4C(0, 0, (int)sub_808B0C0, 4);
    goto _0808B0AC;
  }
  if ( v2038561 == 4 )
    sub_806AF4C(0, 0, (int)sub_808B1EC, -1);
_0808B0AC:
  SetMainCallback2((int)sub_808AF80);
  return v1;
}
