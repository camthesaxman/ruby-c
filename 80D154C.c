int __fastcall sub_80D154C(int a1)
{
  int v1; // r3@1
  int (__fastcall *v2)(int); // r0@3
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  if ( (unsigned __int16)word_3004B0E == 0xFFFF )
  {
    *(_BYTE *)(a1 + 62) |= 4u;
    if ( *(_WORD *)(a1 + 60) )
      v2 = move_anim_8072740;
    else
      v2 = (int (__fastcall *)(int))sub_80D158C;
    *(_DWORD *)(v1 + 28) = v2;
  }
  return v4;
}
