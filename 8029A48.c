int atkC4_802B910()
{
  char *v0; // r7@1
  int v1; // r1@4
  int v2; // r0@4
  _BYTE *v3; // r6@5
  int v4; // r8@5
  int v5; // r0@12
  int v7; // [sp+18h] [bp-4h]@0

  v0 = (char *)&unk_30045C0;
  if ( !(battle_side_get_owner(v2024C07) << 24) )
    v0 = (char *)&unk_3004360;
  if ( !*(_WORD *)(88 * v2024C08 + 0x2024AA8) )
  {
    v1 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16);
    v2 = *(_BYTE *)(v2024C10 + 4);
_08029C40:
    v2024C10 = v1 | (v2 << 24);
    return v7;
  }
  v3 = (_BYTE *)33705246;
  v4 = v2024D1E;
  if ( v2024D1E > 5u )
    goto LABEL_22;
  do
  {
    if ( GetMonData(&v0[100 * v2024D1E], 57)
      && GetMonData(&v0[100 * *v3], 65)
      && GetMonData(&v0[100 * v2024D1E], 65) != 412
      && !GetMonData(&v0[100 * v2024D1E], 55) )
    {
      break;
    }
    ++v2024D1E;
    v3 = (_BYTE *)33705246;
  }
  while ( v2024D1E <= 5u );
  if ( v2024D1E > 5u )
  {
LABEL_22:
    if ( v4 )
    {
      v1 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16);
      v2 = *(_BYTE *)(v2024C10 + 4);
    }
    else
    {
      v1 = *(_BYTE *)(v2024C10 + 5) | (*(_BYTE *)(v2024C10 + 6) << 8) | (*(_BYTE *)(v2024C10 + 7) << 16);
      v2 = *(_BYTE *)(v2024C10 + 8);
    }
    goto _08029C40;
  }
  byte_30041C0[0] = -3;
  byte_30041C1 = 4;
  LOBYTE(word_30041C2) = v2024C07;
  HIBYTE(word_30041C2) = v2024D1E;
  byte_30041C4 = -1;
  v2024C10 += 9;
  v2024BEC = *((_BYTE *)&gBaseStats + 28 * GetMonData(&v0[100 * v2024D1E], 11) + 1);
  v2024BEC *= gBattleMoves[12 * v2024BE6 + 1];
  v2024BEC *= 2 * GetMonData(&v0[100 * v2024D1E], 56) / 5u + 2;
  v5 = v2024BEC / (signed int)*((_BYTE *)&gBaseStats + 28 * *(_WORD *)(88 * v2024C08 + 0x2024A80) + 2) / 50;
  v2024BEC = v5 + 2;
  if ( *(_BYTE *)(16 * v2024C07 + 0x2024D28) & 8 )
    v2024BEC = 15 * (v5 + 2) / 10;
  ++v2024D1E;
  return v7;
}
