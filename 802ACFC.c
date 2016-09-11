int atkE1_802CBE4()
{
  int v0; // r5@1
  int v2; // [sp+Ch] [bp-4h]@0

  v2016003 = v20160DD;
  v0 = (unsigned __int8)battle_side_get_owner(v20160DD);
  byte_30041C0[0] = -3;
  byte_30041C1 = 9;
  LOBYTE(word_30041C2) = *(_BYTE *)(88 * v2016003 + 0x2024AA0);
  HIBYTE(word_30041C2) = -1;
  if ( v2024C08 >= (unsigned int)v2024A68 )
    goto LABEL_11;
  do
  {
    if ( (unsigned __int8)battle_side_get_owner(v2024C08) != v0 && !(v2024C0C & gBitTable[v2024C08]) )
      break;
    ++v2024C08;
  }
  while ( v2024C08 < (unsigned int)v2024A68 );
  if ( v2024C08 < (unsigned int)v2024A68 )
    v2024C10 += 5;
  else
LABEL_11:
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  return v2;
}
