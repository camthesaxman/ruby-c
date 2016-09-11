int ZeroEnemyPartyMons()
{
  void *v0; // r4@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = &unk_30045C0;
  do
  {
    ZeroMonData((int)v0);
    v0 = (char *)v0 + 100;
  }
  while ( (signed int)v0 <= (signed int)&unk_30047B4 );
  return v2;
}
