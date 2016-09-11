int __fastcall sub_806ABF4(unsigned __int8 a1)
{
  int v1; // r5@1
  _WORD *v2; // r4@1
  int v3; // r0@1
  int v5; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &byte_3004B28[40 * a1];
  v3 = *v2;
  if ( *v2 )
  {
    if ( v3 != 1 )
      return v5;
  }
  else
  {
    MenuZeroFillScreen(v3);
    MenuDrawTextWindow(0, 0, 20, 10);
    MenuPrint("ÊזÙחÙגט", 1, 1);
    sub_806A74C(1u, 3u, word_3004038, byte_300403A, byte_300403B, dword_300403C);
    MenuPrint("ÊזÙךÝדיח", 1, 5);
    sub_806A74C(1u, 7u, v2024F44, v2024F46, v2024F47, v2024F48);
    sub_806ABDC((int)"ÌÙחÙט");
    ++*v2;
  }
  if ( word_300179E & 2 )
  {
    DestroyTask(v1);
    DoSoftReset();
  }
  else if ( word_300179E & 1 )
  {
    audio_play(5);
    DestroyTask(v1);
  }
  return v5;
}
