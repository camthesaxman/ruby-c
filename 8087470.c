int __fastcall sub_8087470(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  while ( call_via_r3(
            v1,
            &dword_30048A0[9 * v202E85D],
            &gSprites[68 * v202E85C],
            *(&gUnknown_0839F354 + *((_WORD *)v1 + 4))) << 24 )
    ;
  return v3;
}
