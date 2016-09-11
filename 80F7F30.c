int sub_80F7F30()
{
  unsigned int v0; // r0@1
  int v1; // r1@1
  int v3; // [sp+0h] [bp-4h]@0

  v0 = (unsigned __int8)GetCurrentMauvilleOldMan();
  if ( v0 <= 4 )
  {
    switch ( v0 )
    {
      case 0u:
        v0 = sub_80F7EFC();
        break;
      case 1u:
        v0 = sub_80F7F0C();
        break;
      case 3u:
        v0 = sub_80F7F24();
        break;
      case 2u:
        v0 = sub_80F7F18();
        break;
      default:
        break;
    }
  }
  sub_80F83D0(v0, v1);
  return v3;
}
