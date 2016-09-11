int sub_80F7AA4()
{
  int v0; // r1@1
  unsigned int v1; // r0@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = (v2024EAE | ((unsigned int)v2024EAF << 8)) % 0xA << 16 >> 17;
  if ( v1 <= 4 )
  {
    switch ( v1 )
    {
      case 0u:
        v1 = sub_80F7A34();
        break;
      case 1u:
        v1 = sub_80F7A6C();
        break;
      case 2u:
        v1 = sub_80F7A98();
        break;
      case 3u:
        v1 = sub_80F7A7C();
        break;
      case 4u:
        v1 = sub_80F7A88();
        break;
      default:
        break;
    }
  }
  sub_80F83D0(v1, v0);
  return v3;
}
