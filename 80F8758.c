int sub_80F8758()
{
  int v0; // r4@1
  int v1; // r0@1
  signed int v2; // r5@2
  int v3; // r0@3
  int v5; // [sp+Ch] [bp-4h]@0

  sub_80F849C();
  MenuDrawTextWindow(0, 0);
  v0 = 0;
  v1 = v20284CC;
  if ( v20284CC )
  {
    v2 = 0x2000000;
    do
    {
      v3 = sub_80F8478(v1);
      MenuPrint(v3, 1, BYTE3(v2));
      v2 += 0x2000000;
      if ( ++v0 > 3 )
        break;
      v1 = *(_BYTE *)(v0 + 33719500);
    }
    while ( *(_BYTE *)(v0 + 33719500) );
  }
  MenuPrint((int)&gUnknown_08410866, 1, (unsigned int)((v0 << 25) + 0x2000000) >> 24);
  return v5;
}
