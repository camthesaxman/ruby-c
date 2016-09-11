int sub_80AB398()
{
  signed int v0; // r5@1
  signed int v1; // r4@3
  signed int v2; // r5@3
  signed int v3; // r2@5
  signed int v4; // r5@5
  signed int v5; // r5@9
  _BYTE *v6; // r2@9
  int v8; // [sp+Ch] [bp-4h]@0

  memset(33657348, 0, 92);
  v0 = 0;
  do
  {
    *(_BYTE *)(v0 + 33657350);
    *(_BYTE *)(v0++ + 33657350) = -1;
  }
  while ( v0 <= 3 );
  v1 = 33657440;
  v2 = 3;
  do
  {
    memset(v1, 0, 28);
    v1 += 28;
    --v2;
  }
  while ( v2 >= 0 );
  v3 = 33657451;
  v4 = 3;
  do
  {
    *(_BYTE *)v3 &= 0xFCu;
    *(_BYTE *)(v3 + 8);
    *(_BYTE *)(v3 + 8) = -1;
    *(_BYTE *)(v3 + 9);
    *(_BYTE *)(v3 + 9) = -1;
    v3 += 28;
    --v4;
  }
  while ( v4 >= 0 );
  memset(33657552, 0, 20);
  memset(33657572, 0, 68);
  memset(33657640, 0, 4);
  memset(33657656, 0, 16);
  if ( !(v203869A & 1) )
    sub_80B0F28(0);
  v5 = 0;
  v6 = (_BYTE *)33657465;
  do
  {
    *v6;
    *v6 = -1;
    *(_BYTE *)(v5 + 33657368) = *(_BYTE *)(v5 + 33785494);
    v6 += 28;
    ++v5;
  }
  while ( v5 <= 3 );
  sub_80B159C();
  return v8;
}
