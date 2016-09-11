int ZeroPlayerPartyMons()
{
  void *v0; // r4@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = &unk_3004360;
  do
  {
    ZeroMonData((int)v0);
    v0 = (char *)v0 + 100;
  }
  while ( (signed int)v0 <= (signed int)&unk_3004554 );
  return v2;
}
