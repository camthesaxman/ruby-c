int sub_8052DA8()
{
  signed int v0; // r3@1
  signed int v1; // r2@1
  int v2; // r1@2
  int v3; // r1@2
  int v5; // [sp+10h] [bp-4h]@0

  sub_80B2D1C();
  v0 = 33719856;
  v1 = 4;
  do
  {
    *(_DWORD *)v0 = 0;
    *(_DWORD *)(v0 + 4) = 0;
    *(_DWORD *)(v0 + 8) = -16777216;
    v2 = v0 + 12;
    *(_DWORD *)v2 = 0;
    *(_DWORD *)(v2 + 4) = 0;
    *(_DWORD *)(v2 + 8) = 16711680;
    v3 = v0 + 24;
    *(_DWORD *)v3 = 0;
    *(_DWORD *)(v3 + 4) = 0;
    v0 += 32;
    --v1;
  }
  while ( v1 >= 0 );
  return v5;
}
