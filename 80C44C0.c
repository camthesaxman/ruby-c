int __fastcall sub_80C44C0(int a1, int a2, int a3)
{
  char v3; // r0@4
  unsigned int *v4; // r0@6
  int v5; // r1@6
  unsigned __int8 v7; // [sp+0h] [bp-18h]@4
  int v8; // [sp+14h] [bp-4h]@20

  if ( !*(_BYTE *)(v2038695 + 0x2038690) && v203869C <= 4u )
  {
    switch ( v203869C )
    {
      case 0u:
        v3 = GetMonData((int)&dword_3004360[25 * v2038694], 50, a3);
        v7 = v3;
        if ( (unsigned __int8)v3 <= (unsigned int)v203869E && (unsigned __int8)v3 <= 3u )
        {
          v7 = v3 + 1;
          v4 = &dword_3004360[25 * v2038694];
          v5 = 50;
          goto _080C4610;
        }
        break;
      case 1u:
        v7 = GetMonData((int)&dword_3004360[25 * v2038694], 51, a3);
        if ( v7 <= (unsigned int)v203869E && v7 <= 3u )
        {
          ++v7;
          v4 = &dword_3004360[25 * v2038694];
          v5 = 51;
          goto _080C4610;
        }
        break;
      case 2u:
        v7 = GetMonData((int)&dword_3004360[25 * v2038694], 52, a3);
        if ( v7 <= (unsigned int)v203869E && v7 <= 3u )
        {
          ++v7;
          v4 = &dword_3004360[25 * v2038694];
          v5 = 52;
          goto _080C4610;
        }
        break;
      case 3u:
        v7 = GetMonData((int)&dword_3004360[25 * v2038694], 53, a3);
        if ( v7 <= (unsigned int)v203869E && v7 <= 3u )
        {
          ++v7;
          v4 = &dword_3004360[25 * v2038694];
          v5 = 53;
_080C4610:
          SetMonData((int)v4, v5, (int)&v7);
        }
        break;
      case 4u:
        v7 = GetMonData((int)&dword_3004360[25 * v2038694], 54, a3);
        if ( v7 <= (unsigned int)v203869E && v7 <= 3u )
        {
          ++v7;
          SetMonData((int)&dword_3004360[25 * v2038694], 54, (int)&v7);
        }
        break;
      default:
        return v8;
    }
  }
  return v8;
}
