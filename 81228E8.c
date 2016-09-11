int __fastcall sub_81228E8(unsigned __int8 a1, int a2, int a3)
{
  unsigned __int8 v3; // r6@1
  unsigned int v4; // r5@1
  int v6; // [sp+Ch] [bp-4h]@0

  v3 = a1;
  v4 = 0;
  do
  {
    if ( GetMonData((int)&dword_3004360[25 * v4], 11, a3) )
      sub_806D880(v3, v4, 3u, (int)&dword_3004360[25 * v4]);
    if ( *(_WORD *)(32 * v4 + 0x2023A00) )
    {
      sub_806D99C(v3, v4 + 3, 3u, 32 * v4 + 33700352);
      sub_806D50C(v3, v4 + 3);
    }
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 <= 2 );
  return v6;
}
