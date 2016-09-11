int __fastcall sub_80F9C00(int a1, int a2, int a3)
{
  unsigned int i; // r4@1
  unsigned int v4; // r0@2
  int v6; // [sp+4h] [bp-4h]@0

  for ( i = 0; i < (unsigned __int8)byte_3004350; i = (i + 1) & 0xFF )
  {
    v4 = (unsigned __int8)sub_80AE47C((int)&dword_3004360[25 * i], (int)dword_3004360, a3);
    if ( v4 <= 4 )
    {
      switch ( v4 )
      {
        case 0u:
        case 3u:
        case 4u:
          sub_806BC3C(i, 0x7Eu);
          break;
        case 1u:
        case 2u:
          sub_806BC3C(i, 0x70u);
          break;
        default:
          continue;
      }
    }
  }
  return v6;
}
