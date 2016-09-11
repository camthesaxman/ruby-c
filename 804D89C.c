int sub_804D89C()
{
  char *v0; // r4@1

  v0 = (char *)&gIngameTrades + 60 * v202E8CC;
  StringCopy(&gStringVar1, &gSpeciesNames[11 * *((_WORD *)v0 + 28)]);
  StringCopy(&gStringVar2, &gSpeciesNames[11 * *((_WORD *)v0 + 6)]);
  return *((_WORD *)v0 + 28);
}
