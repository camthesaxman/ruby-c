int __fastcall sub_80BF638(unsigned __int8 a1, unsigned __int16 a2)
{
  int v2; // r4@1
  int v3; // r5@1

  v2 = a1;
  v3 = (unsigned __int16)sub_80BF674(a2);
  StringCopy((_BYTE *)gUnknown_083D1464[v2], &gSpeciesNames[11 * v3]);
  return v3;
}
