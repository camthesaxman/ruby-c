int __fastcall sub_8092964(signed int a1)
{
  char v1; // r2@7
  int v3; // [sp+0h] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  if ( (unsigned __int8)a1 == 1 )
  {
    sub_809286C(0, 1, 0);
    sub_809286C(1u, 0, 0);
    sub_809286C(2u, 1, 0);
    sub_809286C(3u, 1, 1);
    sub_809286C(4u, 1, 1);
    sub_809286C(0xAu, 1, 1);
    sub_809286C(5u, 1, 1);
    v1 = 1;
_08092A1A:
    sub_809286C(6u, 1, v1);
    sub_809286C(7u, 1, 0);
    sub_809286C(8u, 1, 0);
    sub_809286C(9u, 1, 0);
    return v3;
  }
  if ( a1 <= 1 )
  {
    if ( a1 )
      return v3;
    sub_809286C(0, 0, 0);
    sub_809286C(1u, 1, 0);
    sub_809286C(2u, 1, 0);
    sub_809286C(3u, 1, 0);
    sub_809286C(4u, 1, 0);
    sub_809286C(0xAu, 1, 0);
    sub_809286C(5u, 1, 0);
    v1 = 0;
    goto _08092A1A;
  }
  if ( a1 == 2 )
  {
    sub_809286C(0, 1, 0);
    sub_809286C(1u, 1, 0);
    sub_809286C(2u, 0, 0);
    sub_809286C(3u, 1, 1);
    sub_809286C(4u, 1, 1);
    sub_809286C(0xAu, 1, 1);
    sub_809286C(5u, 1, 1);
    sub_809286C(6u, 1, 1);
    sub_809286C(7u, 1, 1);
    sub_809286C(8u, 1, 1);
    sub_809286C(9u, 1, 1);
  }
  return v3;
}
