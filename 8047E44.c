int sub_8047E44()
{
  signed int v0; // r4@1
  signed int v1; // r6@1
  signed int v2; // r4@3
  signed int v3; // r6@3
  signed int v5; // [sp+0h] [bp-2Ch]@2
  signed int v6; // [sp+4h] [bp-28h]@2
  signed int v7; // [sp+8h] [bp-24h]@2
  int v8; // [sp+Ch] [bp-20h]@2
  signed int v9; // [sp+10h] [bp-1Ch]@2
  signed int v10; // [sp+14h] [bp-18h]@2
  int v11; // [sp+28h] [bp-4h]@5

  v0 = 0;
  v1 = 14024704;
  do
  {
    v5 = 322765000;
    v6 = 136364012;
    v7 = 136364068;
    v8 = 0;
    v9 = 136194320;
    v10 = 134222353;
    LOWORD(v5) = v0 + 206;
    CreateSprite((int)&v5, SHIWORD(v1), 152);
    v1 += 0x200000;
    ++v0;
  }
  while ( v0 <= 1 );
  v2 = 0;
  v3 = 1572864;
  do
  {
    v5 = 322765000;
    v6 = 136364012;
    v7 = 136364068;
    v8 = 0;
    v9 = 136194320;
    v10 = 134222353;
    LOWORD(v5) = v2 + 208;
    CreateSprite((int)&v5, SHIWORD(v3), 150);
    v3 += 0x200000;
    ++v2;
  }
  while ( v2 <= 4 );
  return v11;
}
