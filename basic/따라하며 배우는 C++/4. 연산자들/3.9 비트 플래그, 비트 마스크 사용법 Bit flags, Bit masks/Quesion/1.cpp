// 1. 다음 경우에 대해 플래그를 바꿔보세요
// - 기사를 봤을 때
// - 기사의 좋아요를 클릭했을 때
// - 기사의 좋아요를 다시 클릭했을 때
// - 본 기사만 삭제할 때
#include <iostream>
#include <bitset>

using namespace std;

bool watchedArticle(bool isWatched, char option_viewed, unsigned char& my_article_flags);
bool likedArticle(bool isLiked, char option_liked, unsigned char& my_article_flags);
bool dislikedArticle(bool isDisliked, char option_liked, unsigned char& my_article_flags);
bool deletedArticle(bool isDeleted, char option_liked, unsigned char& my_article_flags);

int main()
{
    // 0x는 16진수 표기법
    unsigned char option_viewed     = 0x01;
    unsigned char option_edited     = 0x02;
    unsigned char option_liked      = 0x04;
    unsigned char option_shared     = 0x08;
    unsigned char option_deleted    = 0x80; //! 0x80 = 128 = 1000 0000

    unsigned char my_article_flags  = 0;

    // char 1bytes(8bits)
    cout << bitset<8>(option_viewed) <<endl;
    cout << bitset<8>(option_edited) <<endl;
    cout << bitset<8>(option_liked) <<endl;
    cout << bitset<8>(option_shared) <<endl;
    cout << bitset<8>(option_deleted) <<endl;

    cout << "-----------" << endl;
    bool T = true;
    bool F = false;

    watchedArticle(T, option_viewed, my_article_flags);
    likedArticle(T, option_liked, my_article_flags);    // 00000100
    dislikedArticle(T, option_liked, my_article_flags); // 00000100 -> dislike -> 00000000
    deletedArticle(T, option_deleted, my_article_flags);// 10000000

    return 0;
}

bool watchedArticle(bool isWatched, char option_viewed, unsigned char& my_article_flags)
{
    if(isWatched)
    {
        cout << "기사 봤음" << endl;
        my_article_flags |= option_viewed;
        cout << bitset<8>(my_article_flags) << endl;
        return true;
    }
    else
    {
        cout << "기사 안 봤음" << endl;
        return false;
    }
}

bool likedArticle(bool isLiked, char option_liked, unsigned char& my_article_flags)
{
    if(isLiked)
    {
        cout << "좋아요" << endl;
        my_article_flags |= option_liked;
        cout << bitset<8>(my_article_flags) << endl;
        return true;
    }
    return false;
}

bool dislikedArticle(bool isDisliked, char option_liked, unsigned char& my_article_flags)
{
    if(isDisliked)
    {
        cout << "싫어요" << endl;
        my_article_flags &= ~option_liked;
        cout << bitset<8>(my_article_flags) << endl;
        return true;
    }
    return false;
}

bool deletedArticle(bool isDeleted, char option_deleted, unsigned char& my_article_flags)
{
    if(isDeleted)
    {
        cout << "기사를 삭제합니다" << endl;
        my_article_flags = option_deleted;
        cout << bitset<8>(my_article_flags) << endl;
        return true;
    }
    return false;
}