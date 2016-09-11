int copy_player_party_from_sav1()
{
  unsigned int *v0; // r4@1
  int v1; // r5@1
  int v3; // [sp+Ch] [bp-4h]@0

  byte_3004350 = v2025968;
  v0 = dword_3004360;
  v1 = 0;
  do
  {
    memcpy(v0, v1 + 33708396, 100);
    v0 += 25;
    v1 += 100;
  }
  while ( (signed int)v0 <= (signed int)&unk_3004554 );
  return v3;
}
