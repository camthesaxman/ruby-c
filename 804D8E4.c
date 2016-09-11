int sub_804D8E4()
{
  char *v0; // r4@1
  int v2; // [sp+0h] [bp-28h]@1
  int v3; // [sp+24h] [bp-4h]@1

  v0 = (char *)&gIngameTrades + 60 * v202E8CC;
  GetMonData((int)&dword_3004360[25 * v202E8CE], 2, (int)&v2);
  StringCopy10((int)&gStringVar1, (int)&v2);
  StringCopy(&gStringVar2, &gSpeciesNames[11 * *((_WORD *)v0 + 6)]);
  return v3;
}
