int __fastcall do_go_anim(int a1, int a2, char a3, unsigned __int8 a4)
{
  int v4; // r5@1
  int v5; // r8@1
  int v6; // r4@1
  char v7; // r0@1
  int (__fastcall *v9)(unsigned __int8); // [sp+0h] [bp-2Ch]@1
  int (__fastcall *v10)(unsigned __int8); // [sp+4h] [bp-28h]@1
  int (__fastcall *v11)(unsigned __int8); // [sp+8h] [bp-24h]@1
  int (__fastcall *v12)(unsigned __int8); // [sp+Ch] [bp-20h]@1
  int (__fastcall *v13)(unsigned __int8); // [sp+10h] [bp-1Ch]@1
  int v14; // [sp+28h] [bp-4h]@1

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v9 = get_go_image_anim_num;
  v10 = get_go_fast_image_anim_num;
  v11 = get_go_fast_image_anim_num;
  v12 = get_go_faster_image_anim_num;
  v13 = sub_805FD78;
  sub_8060D20(a1, a2, a3, a4);
  v7 = call_via_r1(*(_BYTE *)(v4 + 24) & 0xF, *(&v9 + v6));
  sub_805FE28(v4, v5, v7);
  return v14;
}
