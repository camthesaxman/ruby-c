signed int sub_80C4440()
{
  signed int v0; // r4@1
  unsigned int *v1; // r0@3
  int v2; // r1@3

  v0 = 0;
  if ( v203869C <= 4u )
  {
    switch ( v203869C )
    {
      case 0u:
        v1 = &dword_3004360[25 * v2038694];
        v2 = 50;
        goto _080C44A4;
      case 1u:
        v1 = &dword_3004360[25 * v2038694];
        v2 = 51;
        goto _080C44A4;
      case 2u:
        v1 = &dword_3004360[25 * v2038694];
        v2 = 52;
        goto _080C44A4;
      case 3u:
        v1 = &dword_3004360[25 * v2038694];
        v2 = 53;
        goto _080C44A4;
      case 4u:
        v1 = &dword_3004360[25 * v2038694];
        v2 = 54;
_080C44A4:
        if ( GetMonData((int)v1, v2, (int)&dword_3004360[25 * v2038694]) > (unsigned int)v203869E )
          v0 = 1;
        break;
      default:
        return v0;
    }
  }
  return v0;
}
