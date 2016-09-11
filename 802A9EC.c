int atkDD_weightdamagecalculation()
{
  int v0; // r5@1
  __int16 *v1; // r4@2
  unsigned __int16 v2; // r0@3
  int v4; // [sp+14h] [bp-4h]@0

  v0 = 0;
  if ( (unsigned __int16)gWeightDamage[0] == 0xFFFF )
    goto LABEL_11;
  v1 = gWeightDamage;
  do
  {
    v2 = SpeciesToNationalPokedexNum(*(_WORD *)(88 * v2024C08 + 0x2024A80));
    if ( (unsigned __int16)*v1 > (sub_8090D54(v2, 1) & 0xFFFFu) )
      break;
    v1 += 2;
    v0 += 2;
  }
  while ( (unsigned __int16)*v1 != 0xFFFF );
  if ( (unsigned __int16)gWeightDamage[v0] == 0xFFFF )
LABEL_11:
    v2024DEC = 120;
  else
    v2024DEC = gWeightDamage[v0 + 1];
  ++v2024C10;
  return v4;
}
