int __fastcall sub_8055BFC(int a1, unsigned __int8 a2)
{
  int v2; // r5@1
  int *v3; // r6@1
  int v4; // r0@4
  int v6; // [sp+Ch] [bp-4h]@0

  v2 = (4 * a1 & 0x3FF) + 33724440;
  v3 = &dword_30048A0[9 * *(_BYTE *)((4 * a1 & 0x3FF) + 0x202981A)];
  if ( *(_BYTE *)((4 * a1 & 0x3FF) + 0x2029818) )
  {
    if ( a2 <= 0xAu )
    {
      v4 = call_via_r3(
             (4 * a1 & 0x3FF) + 33724440,
             v3,
             a2,
             *(&gUnknown_082166A0 + *(_BYTE *)((4 * a1 & 0x3FF) + 0x202981B)));
      call_via_r2(v2, v3, *(void **)((char *)&gUnknown_082166D8 + (4 * v4 & 0x3FF)));
    }
    else
    {
      *(_BYTE *)v3 |= 4u;
    }
  }
  return v6;
}
